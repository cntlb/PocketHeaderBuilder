/*
 * Copyright 2015 ChalkPE
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package pe.chalk.minecraft;

import org.jsoup.Jsoup;

import java.util.logging.Level;
import java.util.logging.Logger;

/**
 * @author ChalkPE <chalkpe@gmail.com>
 * @since 2015-11-16
 */
public class OnlineDemangler {
    private OnlineDemangler(){}

    public static String demangle(final String input){
        Logger.getLogger("OnlineDemangler").log(Level.INFO, input);

        try{
            return Jsoup.connect("http://demangler.com/").data("input", input).post().select("div.section > pre").first().text();
        }catch(Exception e){
            e.printStackTrace();
            return null;
        }
    }
}
